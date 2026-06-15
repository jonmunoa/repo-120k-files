// fichero 40501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40501;

Registro40501 crear_registro40501(int id) {
    Registro40501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
