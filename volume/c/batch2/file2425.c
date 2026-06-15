// fichero 2425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2425;

Registro2425 crear_registro2425(int id) {
    Registro2425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
