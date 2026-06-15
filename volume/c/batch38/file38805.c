// fichero 38805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38805;

Registro38805 crear_registro38805(int id) {
    Registro38805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
