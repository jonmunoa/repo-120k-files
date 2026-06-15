// fichero 38241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38241;

Registro38241 crear_registro38241(int id) {
    Registro38241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
