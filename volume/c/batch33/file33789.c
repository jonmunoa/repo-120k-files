// fichero 33789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33789;

Registro33789 crear_registro33789(int id) {
    Registro33789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
