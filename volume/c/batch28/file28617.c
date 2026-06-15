// fichero 28617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28617;

Registro28617 crear_registro28617(int id) {
    Registro28617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
