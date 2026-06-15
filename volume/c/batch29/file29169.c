// fichero 29169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29169;

Registro29169 crear_registro29169(int id) {
    Registro29169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
