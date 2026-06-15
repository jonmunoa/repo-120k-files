// fichero 11997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11997;

Registro11997 crear_registro11997(int id) {
    Registro11997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
