// fichero 18729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18729;

Registro18729 crear_registro18729(int id) {
    Registro18729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
