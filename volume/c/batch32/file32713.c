// fichero 32713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32713;

Registro32713 crear_registro32713(int id) {
    Registro32713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
