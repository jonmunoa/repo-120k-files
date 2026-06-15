// fichero 11813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11813;

Registro11813 crear_registro11813(int id) {
    Registro11813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
