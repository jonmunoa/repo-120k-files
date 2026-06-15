// fichero 14437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14437;

Registro14437 crear_registro14437(int id) {
    Registro14437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
