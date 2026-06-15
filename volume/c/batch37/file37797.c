// fichero 37797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37797;

Registro37797 crear_registro37797(int id) {
    Registro37797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
