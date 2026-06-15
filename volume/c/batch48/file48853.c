// fichero 48853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48853;

Registro48853 crear_registro48853(int id) {
    Registro48853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
