// fichero 14865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14865;

Registro14865 crear_registro14865(int id) {
    Registro14865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
