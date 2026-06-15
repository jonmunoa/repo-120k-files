// fichero 10833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10833;

Registro10833 crear_registro10833(int id) {
    Registro10833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
