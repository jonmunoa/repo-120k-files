// fichero 48945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48945;

Registro48945 crear_registro48945(int id) {
    Registro48945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
