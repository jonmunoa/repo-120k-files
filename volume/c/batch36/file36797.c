// fichero 36797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36797;

Registro36797 crear_registro36797(int id) {
    Registro36797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
