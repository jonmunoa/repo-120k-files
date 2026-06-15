// fichero 40597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40597;

Registro40597 crear_registro40597(int id) {
    Registro40597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
