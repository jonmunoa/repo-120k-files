// fichero 2793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2793;

Registro2793 crear_registro2793(int id) {
    Registro2793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
