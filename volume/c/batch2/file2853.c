// fichero 2853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2853;

Registro2853 crear_registro2853(int id) {
    Registro2853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
