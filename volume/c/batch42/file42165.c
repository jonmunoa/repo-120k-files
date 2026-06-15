// fichero 42165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42165;

Registro42165 crear_registro42165(int id) {
    Registro42165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
