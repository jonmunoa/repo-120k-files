// fichero 10813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10813;

Registro10813 crear_registro10813(int id) {
    Registro10813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
