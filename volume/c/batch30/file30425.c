// fichero 30425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30425;

Registro30425 crear_registro30425(int id) {
    Registro30425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
