// fichero 2817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2817;

Registro2817 crear_registro2817(int id) {
    Registro2817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
