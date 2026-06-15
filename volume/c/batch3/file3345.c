// fichero 3345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3345;

Registro3345 crear_registro3345(int id) {
    Registro3345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
