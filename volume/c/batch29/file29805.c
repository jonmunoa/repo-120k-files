// fichero 29805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29805;

Registro29805 crear_registro29805(int id) {
    Registro29805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
