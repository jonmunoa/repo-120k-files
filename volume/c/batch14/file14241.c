// fichero 14241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14241;

Registro14241 crear_registro14241(int id) {
    Registro14241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
