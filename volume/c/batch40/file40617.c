// fichero 40617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40617;

Registro40617 crear_registro40617(int id) {
    Registro40617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
