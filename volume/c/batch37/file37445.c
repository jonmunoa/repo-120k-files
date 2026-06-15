// fichero 37445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37445;

Registro37445 crear_registro37445(int id) {
    Registro37445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
