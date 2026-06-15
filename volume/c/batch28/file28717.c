// fichero 28717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28717;

Registro28717 crear_registro28717(int id) {
    Registro28717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
