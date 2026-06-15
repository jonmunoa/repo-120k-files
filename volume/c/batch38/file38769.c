// fichero 38769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38769;

Registro38769 crear_registro38769(int id) {
    Registro38769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
