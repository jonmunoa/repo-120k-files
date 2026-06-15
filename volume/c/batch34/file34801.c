// fichero 34801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34801;

Registro34801 crear_registro34801(int id) {
    Registro34801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
