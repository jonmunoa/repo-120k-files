// fichero 36509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36509;

Registro36509 crear_registro36509(int id) {
    Registro36509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
