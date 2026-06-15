// fichero 11237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11237;

Registro11237 crear_registro11237(int id) {
    Registro11237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
