// fichero 797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro797;

Registro797 crear_registro797(int id) {
    Registro797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
