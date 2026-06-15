// fichero 3805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3805;

Registro3805 crear_registro3805(int id) {
    Registro3805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
