// fichero 5797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5797;

Registro5797 crear_registro5797(int id) {
    Registro5797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
