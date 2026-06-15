// fichero 47089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47089;

Registro47089 crear_registro47089(int id) {
    Registro47089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
