// fichero 42877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42877;

Registro42877 crear_registro42877(int id) {
    Registro42877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
