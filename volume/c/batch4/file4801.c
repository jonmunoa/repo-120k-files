// fichero 4801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4801;

Registro4801 crear_registro4801(int id) {
    Registro4801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
