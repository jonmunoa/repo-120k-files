// fichero 24577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24577;

Registro24577 crear_registro24577(int id) {
    Registro24577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
