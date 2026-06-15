// fichero 27805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27805;

Registro27805 crear_registro27805(int id) {
    Registro27805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
