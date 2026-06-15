// fichero 20045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20045;

Registro20045 crear_registro20045(int id) {
    Registro20045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
