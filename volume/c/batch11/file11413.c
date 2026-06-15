// fichero 11413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11413;

Registro11413 crear_registro11413(int id) {
    Registro11413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
