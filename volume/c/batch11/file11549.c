// fichero 11549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11549;

Registro11549 crear_registro11549(int id) {
    Registro11549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
