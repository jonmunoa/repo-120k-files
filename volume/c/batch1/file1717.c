// fichero 1717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1717;

Registro1717 crear_registro1717(int id) {
    Registro1717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
