// fichero 38213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38213;

Registro38213 crear_registro38213(int id) {
    Registro38213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
