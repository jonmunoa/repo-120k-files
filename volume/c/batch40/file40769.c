// fichero 40769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40769;

Registro40769 crear_registro40769(int id) {
    Registro40769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
