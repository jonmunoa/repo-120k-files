// fichero 17801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17801;

Registro17801 crear_registro17801(int id) {
    Registro17801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
