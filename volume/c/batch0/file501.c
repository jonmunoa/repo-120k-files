// fichero 501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro501;

Registro501 crear_registro501(int id) {
    Registro501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
