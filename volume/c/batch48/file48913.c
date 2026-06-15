// fichero 48913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48913;

Registro48913 crear_registro48913(int id) {
    Registro48913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
