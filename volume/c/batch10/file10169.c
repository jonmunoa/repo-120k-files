// fichero 10169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10169;

Registro10169 crear_registro10169(int id) {
    Registro10169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
