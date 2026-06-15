// fichero 36721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36721;

Registro36721 crear_registro36721(int id) {
    Registro36721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
