// fichero 40813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40813;

Registro40813 crear_registro40813(int id) {
    Registro40813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
