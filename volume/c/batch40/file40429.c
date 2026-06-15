// fichero 40429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40429;

Registro40429 crear_registro40429(int id) {
    Registro40429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
