// fichero 40437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40437;

Registro40437 crear_registro40437(int id) {
    Registro40437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
