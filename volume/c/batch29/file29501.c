// fichero 29501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29501;

Registro29501 crear_registro29501(int id) {
    Registro29501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
