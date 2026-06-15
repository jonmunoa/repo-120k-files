// fichero 43981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43981;

Registro43981 crear_registro43981(int id) {
    Registro43981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
