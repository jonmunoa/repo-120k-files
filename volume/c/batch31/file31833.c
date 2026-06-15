// fichero 31833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31833;

Registro31833 crear_registro31833(int id) {
    Registro31833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
