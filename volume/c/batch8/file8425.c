// fichero 8425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8425;

Registro8425 crear_registro8425(int id) {
    Registro8425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
