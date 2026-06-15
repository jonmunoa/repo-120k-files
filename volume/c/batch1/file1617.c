// fichero 1617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1617;

Registro1617 crear_registro1617(int id) {
    Registro1617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
