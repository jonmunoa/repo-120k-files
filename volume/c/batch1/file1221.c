// fichero 1221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1221;

Registro1221 crear_registro1221(int id) {
    Registro1221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
