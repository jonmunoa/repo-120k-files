// fichero 26713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26713;

Registro26713 crear_registro26713(int id) {
    Registro26713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
