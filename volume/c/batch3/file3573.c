// fichero 3573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3573;

Registro3573 crear_registro3573(int id) {
    Registro3573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
