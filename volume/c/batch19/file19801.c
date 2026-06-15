// fichero 19801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19801;

Registro19801 crear_registro19801(int id) {
    Registro19801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
