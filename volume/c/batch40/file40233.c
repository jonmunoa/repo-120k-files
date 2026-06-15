// fichero 40233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40233;

Registro40233 crear_registro40233(int id) {
    Registro40233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
