// fichero 40373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40373;

Registro40373 crear_registro40373(int id) {
    Registro40373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
