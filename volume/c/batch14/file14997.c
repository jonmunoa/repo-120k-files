// fichero 14997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14997;

Registro14997 crear_registro14997(int id) {
    Registro14997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
