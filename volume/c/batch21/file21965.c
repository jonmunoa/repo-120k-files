// fichero 21965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21965;

Registro21965 crear_registro21965(int id) {
    Registro21965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
