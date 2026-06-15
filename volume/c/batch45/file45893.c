// fichero 45893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45893;

Registro45893 crear_registro45893(int id) {
    Registro45893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
