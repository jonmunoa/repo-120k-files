// fichero 42497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42497;

Registro42497 crear_registro42497(int id) {
    Registro42497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
