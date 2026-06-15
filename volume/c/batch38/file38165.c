// fichero 38165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38165;

Registro38165 crear_registro38165(int id) {
    Registro38165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
