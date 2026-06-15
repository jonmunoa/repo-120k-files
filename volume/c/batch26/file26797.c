// fichero 26797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26797;

Registro26797 crear_registro26797(int id) {
    Registro26797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
