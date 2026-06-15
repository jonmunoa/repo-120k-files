// fichero 45889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45889;

Registro45889 crear_registro45889(int id) {
    Registro45889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
