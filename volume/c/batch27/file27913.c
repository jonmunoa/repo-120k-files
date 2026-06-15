// fichero 27913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27913;

Registro27913 crear_registro27913(int id) {
    Registro27913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
