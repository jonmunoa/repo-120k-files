// fichero 4617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4617;

Registro4617 crear_registro4617(int id) {
    Registro4617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
