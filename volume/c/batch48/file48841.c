// fichero 48841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48841;

Registro48841 crear_registro48841(int id) {
    Registro48841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
