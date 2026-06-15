// fichero 33049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33049;

Registro33049 crear_registro33049(int id) {
    Registro33049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
