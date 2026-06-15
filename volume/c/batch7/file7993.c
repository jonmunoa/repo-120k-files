// fichero 7993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7993;

Registro7993 crear_registro7993(int id) {
    Registro7993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
