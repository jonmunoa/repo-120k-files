// fichero 11665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11665;

Registro11665 crear_registro11665(int id) {
    Registro11665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
