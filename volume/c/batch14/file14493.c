// fichero 14493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14493;

Registro14493 crear_registro14493(int id) {
    Registro14493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
