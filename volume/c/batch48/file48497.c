// fichero 48497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48497;

Registro48497 crear_registro48497(int id) {
    Registro48497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
