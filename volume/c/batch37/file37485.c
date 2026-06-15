// fichero 37485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37485;

Registro37485 crear_registro37485(int id) {
    Registro37485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
