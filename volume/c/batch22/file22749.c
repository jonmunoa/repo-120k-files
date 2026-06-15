// fichero 22749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22749;

Registro22749 crear_registro22749(int id) {
    Registro22749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
