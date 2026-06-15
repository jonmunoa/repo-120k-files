// fichero 5717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5717;

Registro5717 crear_registro5717(int id) {
    Registro5717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
