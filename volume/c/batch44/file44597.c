// fichero 44597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44597;

Registro44597 crear_registro44597(int id) {
    Registro44597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
