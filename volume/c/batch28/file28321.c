// fichero 28321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28321;

Registro28321 crear_registro28321(int id) {
    Registro28321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
