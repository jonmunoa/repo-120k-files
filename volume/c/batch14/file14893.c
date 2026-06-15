// fichero 14893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14893;

Registro14893 crear_registro14893(int id) {
    Registro14893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
