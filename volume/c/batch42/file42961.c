// fichero 42961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42961;

Registro42961 crear_registro42961(int id) {
    Registro42961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
