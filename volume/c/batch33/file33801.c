// fichero 33801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33801;

Registro33801 crear_registro33801(int id) {
    Registro33801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
