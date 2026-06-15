// fichero 14757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14757;

Registro14757 crear_registro14757(int id) {
    Registro14757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
