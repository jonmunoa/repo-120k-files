// fichero 7689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7689;

Registro7689 crear_registro7689(int id) {
    Registro7689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
