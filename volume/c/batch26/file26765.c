// fichero 26765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26765;

Registro26765 crear_registro26765(int id) {
    Registro26765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
