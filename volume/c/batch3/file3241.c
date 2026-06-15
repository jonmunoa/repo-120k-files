// fichero 3241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3241;

Registro3241 crear_registro3241(int id) {
    Registro3241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
