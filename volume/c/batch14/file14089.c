// fichero 14089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14089;

Registro14089 crear_registro14089(int id) {
    Registro14089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
