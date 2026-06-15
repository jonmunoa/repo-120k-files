// fichero 27505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27505;

Registro27505 crear_registro27505(int id) {
    Registro27505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
