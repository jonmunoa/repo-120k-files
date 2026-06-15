// fichero 33293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33293;

Registro33293 crear_registro33293(int id) {
    Registro33293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
