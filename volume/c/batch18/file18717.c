// fichero 18717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18717;

Registro18717 crear_registro18717(int id) {
    Registro18717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
