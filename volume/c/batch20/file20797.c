// fichero 20797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20797;

Registro20797 crear_registro20797(int id) {
    Registro20797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
