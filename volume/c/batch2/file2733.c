// fichero 2733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2733;

Registro2733 crear_registro2733(int id) {
    Registro2733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
