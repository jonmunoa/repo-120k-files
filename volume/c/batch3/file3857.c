// fichero 3857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3857;

Registro3857 crear_registro3857(int id) {
    Registro3857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
