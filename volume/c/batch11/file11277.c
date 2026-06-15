// fichero 11277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11277;

Registro11277 crear_registro11277(int id) {
    Registro11277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
