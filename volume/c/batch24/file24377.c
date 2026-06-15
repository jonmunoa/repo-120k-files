// fichero 24377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24377;

Registro24377 crear_registro24377(int id) {
    Registro24377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
