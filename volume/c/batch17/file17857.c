// fichero 17857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17857;

Registro17857 crear_registro17857(int id) {
    Registro17857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
