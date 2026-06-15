// fichero 43917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43917;

Registro43917 crear_registro43917(int id) {
    Registro43917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
