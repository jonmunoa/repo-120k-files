// fichero 42445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42445;

Registro42445 crear_registro42445(int id) {
    Registro42445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
