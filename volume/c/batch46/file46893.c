// fichero 46893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46893;

Registro46893 crear_registro46893(int id) {
    Registro46893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
