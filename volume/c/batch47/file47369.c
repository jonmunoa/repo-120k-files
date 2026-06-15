// fichero 47369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47369;

Registro47369 crear_registro47369(int id) {
    Registro47369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
