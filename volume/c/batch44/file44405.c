// fichero 44405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44405;

Registro44405 crear_registro44405(int id) {
    Registro44405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
