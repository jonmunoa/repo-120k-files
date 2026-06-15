// fichero 11145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11145;

Registro11145 crear_registro11145(int id) {
    Registro11145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
