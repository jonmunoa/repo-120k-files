// fichero 10617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10617;

Registro10617 crear_registro10617(int id) {
    Registro10617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
