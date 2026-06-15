// fichero 27893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27893;

Registro27893 crear_registro27893(int id) {
    Registro27893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
