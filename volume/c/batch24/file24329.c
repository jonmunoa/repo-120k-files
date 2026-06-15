// fichero 24329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24329;

Registro24329 crear_registro24329(int id) {
    Registro24329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
