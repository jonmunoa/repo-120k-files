// fichero 6501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6501;

Registro6501 crear_registro6501(int id) {
    Registro6501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
