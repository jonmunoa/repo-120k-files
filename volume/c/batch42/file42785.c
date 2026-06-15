// fichero 42785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42785;

Registro42785 crear_registro42785(int id) {
    Registro42785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
