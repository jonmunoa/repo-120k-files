// fichero 11769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11769;

Registro11769 crear_registro11769(int id) {
    Registro11769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
