// fichero 38521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38521;

Registro38521 crear_registro38521(int id) {
    Registro38521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
