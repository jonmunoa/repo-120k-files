// fichero 11601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11601;

Registro11601 crear_registro11601(int id) {
    Registro11601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
