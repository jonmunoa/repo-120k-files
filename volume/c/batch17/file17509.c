// fichero 17509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17509;

Registro17509 crear_registro17509(int id) {
    Registro17509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
