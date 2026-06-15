// fichero 26921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26921;

Registro26921 crear_registro26921(int id) {
    Registro26921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
