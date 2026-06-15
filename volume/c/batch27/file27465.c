// fichero 27465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27465;

Registro27465 crear_registro27465(int id) {
    Registro27465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
