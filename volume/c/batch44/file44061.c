// fichero 44061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44061;

Registro44061 crear_registro44061(int id) {
    Registro44061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
