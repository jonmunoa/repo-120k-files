// fichero 16501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16501;

Registro16501 crear_registro16501(int id) {
    Registro16501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
