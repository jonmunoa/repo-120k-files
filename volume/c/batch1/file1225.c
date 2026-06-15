// fichero 1225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1225;

Registro1225 crear_registro1225(int id) {
    Registro1225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
