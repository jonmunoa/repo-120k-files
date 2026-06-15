// fichero 1805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1805;

Registro1805 crear_registro1805(int id) {
    Registro1805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
