// fichero 7045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7045;

Registro7045 crear_registro7045(int id) {
    Registro7045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
