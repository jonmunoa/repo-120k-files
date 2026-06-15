// fichero 42949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42949;

Registro42949 crear_registro42949(int id) {
    Registro42949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
