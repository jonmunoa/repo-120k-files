// fichero 17717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17717;

Registro17717 crear_registro17717(int id) {
    Registro17717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
