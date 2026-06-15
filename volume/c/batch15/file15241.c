// fichero 15241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15241;

Registro15241 crear_registro15241(int id) {
    Registro15241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
