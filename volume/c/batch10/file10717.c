// fichero 10717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10717;

Registro10717 crear_registro10717(int id) {
    Registro10717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
