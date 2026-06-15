// fichero 12241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12241;

Registro12241 crear_registro12241(int id) {
    Registro12241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
