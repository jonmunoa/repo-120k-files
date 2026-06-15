// fichero 421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro421;

Registro421 crear_registro421(int id) {
    Registro421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
