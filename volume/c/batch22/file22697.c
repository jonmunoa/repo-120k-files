// fichero 22697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22697;

Registro22697 crear_registro22697(int id) {
    Registro22697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
