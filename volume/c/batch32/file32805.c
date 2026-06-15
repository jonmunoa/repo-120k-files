// fichero 32805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32805;

Registro32805 crear_registro32805(int id) {
    Registro32805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
