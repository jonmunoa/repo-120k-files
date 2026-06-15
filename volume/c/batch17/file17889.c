// fichero 17889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17889;

Registro17889 crear_registro17889(int id) {
    Registro17889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
