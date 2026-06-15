// fichero 3889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3889;

Registro3889 crear_registro3889(int id) {
    Registro3889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
