// fichero 28865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28865;

Registro28865 crear_registro28865(int id) {
    Registro28865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
