// fichero 38737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38737;

Registro38737 crear_registro38737(int id) {
    Registro38737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
