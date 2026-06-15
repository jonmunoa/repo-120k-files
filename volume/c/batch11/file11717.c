// fichero 11717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11717;

Registro11717 crear_registro11717(int id) {
    Registro11717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
