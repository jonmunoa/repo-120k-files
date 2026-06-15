// fichero 6797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6797;

Registro6797 crear_registro6797(int id) {
    Registro6797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
