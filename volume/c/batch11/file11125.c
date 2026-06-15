// fichero 11125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11125;

Registro11125 crear_registro11125(int id) {
    Registro11125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
