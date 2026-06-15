// fichero 7797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7797;

Registro7797 crear_registro7797(int id) {
    Registro7797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
