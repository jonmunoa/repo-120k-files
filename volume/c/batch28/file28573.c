// fichero 28573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28573;

Registro28573 crear_registro28573(int id) {
    Registro28573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
