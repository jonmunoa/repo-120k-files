// fichero 33669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33669;

Registro33669 crear_registro33669(int id) {
    Registro33669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
