// fichero 20617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20617;

Registro20617 crear_registro20617(int id) {
    Registro20617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
