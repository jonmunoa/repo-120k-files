// fichero 12509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12509;

Registro12509 crear_registro12509(int id) {
    Registro12509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
