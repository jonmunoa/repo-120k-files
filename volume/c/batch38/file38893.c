// fichero 38893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38893;

Registro38893 crear_registro38893(int id) {
    Registro38893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
