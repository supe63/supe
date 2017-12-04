; ZONE : ocb.re
; ------------------------------------------------------------------
$TTL 7200

@       IN      SOA    dns1.ocb.re. hostmaster.ocb.re. (
                                                 1 ; Serial
                                        14400      ; Refresh
                                        3600       ; Retry
                                        1209600    ; Expire - 1 week
                                        86400 )    ; Minimum

; NAMESERVERS

@                   IN                NS                   dns1.ocb.re.
dns1                IN                A                    IPV4
nginx               IN                A                    IPV4

www               IN               CNAME           pve.ocb.re.
mail              IN               CNAME           pve.ocb.re.
