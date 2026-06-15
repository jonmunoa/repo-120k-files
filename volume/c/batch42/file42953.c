// fichero 42953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42953;

Registro42953 crear_registro42953(int id) {
    Registro42953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
