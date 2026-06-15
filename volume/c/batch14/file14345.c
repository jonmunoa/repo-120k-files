// fichero 14345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14345;

Registro14345 crear_registro14345(int id) {
    Registro14345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
