// fichero 14805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14805;

Registro14805 crear_registro14805(int id) {
    Registro14805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
