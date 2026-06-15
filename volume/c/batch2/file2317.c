// fichero 2317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2317;

Registro2317 crear_registro2317(int id) {
    Registro2317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
