// fichero 32045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32045;

Registro32045 crear_registro32045(int id) {
    Registro32045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
