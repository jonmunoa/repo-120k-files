// fichero 40825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40825;

Registro40825 crear_registro40825(int id) {
    Registro40825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
