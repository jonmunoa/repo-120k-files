// fichero 21797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21797;

Registro21797 crear_registro21797(int id) {
    Registro21797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
