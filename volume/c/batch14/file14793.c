// fichero 14793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14793;

Registro14793 crear_registro14793(int id) {
    Registro14793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
