// fichero 42669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42669;

Registro42669 crear_registro42669(int id) {
    Registro42669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
