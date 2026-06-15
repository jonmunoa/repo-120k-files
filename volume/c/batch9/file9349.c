// fichero 9349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9349;

Registro9349 crear_registro9349(int id) {
    Registro9349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
