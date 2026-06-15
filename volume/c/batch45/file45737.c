// fichero 45737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45737;

Registro45737 crear_registro45737(int id) {
    Registro45737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
