// fichero 11613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11613;

Registro11613 crear_registro11613(int id) {
    Registro11613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
