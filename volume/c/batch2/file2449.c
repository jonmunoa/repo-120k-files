// fichero 2449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2449;

Registro2449 crear_registro2449(int id) {
    Registro2449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
