// fichero 9473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9473;

Registro9473 crear_registro9473(int id) {
    Registro9473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
