// fichero 7997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7997;

Registro7997 crear_registro7997(int id) {
    Registro7997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
