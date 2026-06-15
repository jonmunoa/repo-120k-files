// fichero 28801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28801;

Registro28801 crear_registro28801(int id) {
    Registro28801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
