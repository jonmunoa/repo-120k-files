// fichero 42065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42065;

Registro42065 crear_registro42065(int id) {
    Registro42065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
