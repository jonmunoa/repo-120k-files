// fichero 1113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1113;

Registro1113 crear_registro1113(int id) {
    Registro1113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
