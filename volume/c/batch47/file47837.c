// fichero 47837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47837;

Registro47837 crear_registro47837(int id) {
    Registro47837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
