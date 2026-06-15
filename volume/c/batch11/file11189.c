// fichero 11189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11189;

Registro11189 crear_registro11189(int id) {
    Registro11189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
