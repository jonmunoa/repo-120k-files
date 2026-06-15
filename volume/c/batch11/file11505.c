// fichero 11505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11505;

Registro11505 crear_registro11505(int id) {
    Registro11505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
