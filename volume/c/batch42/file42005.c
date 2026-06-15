// fichero 42005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42005;

Registro42005 crear_registro42005(int id) {
    Registro42005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
