// fichero 26565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26565;

Registro26565 crear_registro26565(int id) {
    Registro26565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
