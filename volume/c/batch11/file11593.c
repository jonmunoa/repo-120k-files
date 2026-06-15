// fichero 11593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11593;

Registro11593 crear_registro11593(int id) {
    Registro11593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
