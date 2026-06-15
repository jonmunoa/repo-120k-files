// fichero 15277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15277;

Registro15277 crear_registro15277(int id) {
    Registro15277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
