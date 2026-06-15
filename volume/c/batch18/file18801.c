// fichero 18801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18801;

Registro18801 crear_registro18801(int id) {
    Registro18801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
