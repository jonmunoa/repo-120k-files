// fichero 40273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40273;

Registro40273 crear_registro40273(int id) {
    Registro40273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
