// fichero 40601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40601;

Registro40601 crear_registro40601(int id) {
    Registro40601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
