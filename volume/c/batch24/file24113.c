// fichero 24113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24113;

Registro24113 crear_registro24113(int id) {
    Registro24113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
