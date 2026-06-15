// fichero 43049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43049;

Registro43049 crear_registro43049(int id) {
    Registro43049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
