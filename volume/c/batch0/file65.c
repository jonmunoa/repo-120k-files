// fichero 65 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro65;

Registro65 crear_registro65(int id) {
    Registro65 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
