// fichero 48169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48169;

Registro48169 crear_registro48169(int id) {
    Registro48169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
