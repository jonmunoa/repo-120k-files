// fichero 34797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34797;

Registro34797 crear_registro34797(int id) {
    Registro34797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
