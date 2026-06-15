// fichero 40297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40297;

Registro40297 crear_registro40297(int id) {
    Registro40297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
