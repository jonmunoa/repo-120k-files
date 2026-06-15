// fichero 42993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42993;

Registro42993 crear_registro42993(int id) {
    Registro42993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
