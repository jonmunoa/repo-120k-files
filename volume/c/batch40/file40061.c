// fichero 40061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40061;

Registro40061 crear_registro40061(int id) {
    Registro40061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
