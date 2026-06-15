// fichero 42957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42957;

Registro42957 crear_registro42957(int id) {
    Registro42957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
