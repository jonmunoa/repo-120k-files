// fichero 27797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27797;

Registro27797 crear_registro27797(int id) {
    Registro27797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
