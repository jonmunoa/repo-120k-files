// fichero 11317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11317;

Registro11317 crear_registro11317(int id) {
    Registro11317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
