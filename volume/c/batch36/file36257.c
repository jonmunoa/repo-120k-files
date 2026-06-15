// fichero 36257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36257;

Registro36257 crear_registro36257(int id) {
    Registro36257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
