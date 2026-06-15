// fichero 44921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44921;

Registro44921 crear_registro44921(int id) {
    Registro44921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
