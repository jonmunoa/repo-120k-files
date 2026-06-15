// fichero 24345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24345;

Registro24345 crear_registro24345(int id) {
    Registro24345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
