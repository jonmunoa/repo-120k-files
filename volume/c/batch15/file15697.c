// fichero 15697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15697;

Registro15697 crear_registro15697(int id) {
    Registro15697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
