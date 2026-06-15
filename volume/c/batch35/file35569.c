// fichero 35569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35569;

Registro35569 crear_registro35569(int id) {
    Registro35569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
