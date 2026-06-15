// fichero 11677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11677;

Registro11677 crear_registro11677(int id) {
    Registro11677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
