// fichero 11397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11397;

Registro11397 crear_registro11397(int id) {
    Registro11397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
