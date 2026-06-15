// fichero 3517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3517;

Registro3517 crear_registro3517(int id) {
    Registro3517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
