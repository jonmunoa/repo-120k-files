// fichero 7617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7617;

Registro7617 crear_registro7617(int id) {
    Registro7617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
