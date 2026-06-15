// fichero 7513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7513;

Registro7513 crear_registro7513(int id) {
    Registro7513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
