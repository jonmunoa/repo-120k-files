// fichero 33397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33397;

Registro33397 crear_registro33397(int id) {
    Registro33397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
