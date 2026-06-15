// fichero 3801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3801;

Registro3801 crear_registro3801(int id) {
    Registro3801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
