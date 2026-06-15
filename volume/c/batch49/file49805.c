// fichero 49805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49805;

Registro49805 crear_registro49805(int id) {
    Registro49805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
