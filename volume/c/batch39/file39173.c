// fichero 39173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39173;

Registro39173 crear_registro39173(int id) {
    Registro39173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
