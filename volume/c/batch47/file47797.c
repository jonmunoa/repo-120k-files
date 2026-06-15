// fichero 47797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47797;

Registro47797 crear_registro47797(int id) {
    Registro47797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
