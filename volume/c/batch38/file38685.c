// fichero 38685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38685;

Registro38685 crear_registro38685(int id) {
    Registro38685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
