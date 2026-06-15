// fichero 42161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42161;

Registro42161 crear_registro42161(int id) {
    Registro42161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
