// fichero 30737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30737;

Registro30737 crear_registro30737(int id) {
    Registro30737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
