// fichero 24697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24697;

Registro24697 crear_registro24697(int id) {
    Registro24697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
