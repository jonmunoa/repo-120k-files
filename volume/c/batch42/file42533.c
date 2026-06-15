// fichero 42533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42533;

Registro42533 crear_registro42533(int id) {
    Registro42533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
