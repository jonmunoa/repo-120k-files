// fichero 18045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18045;

Registro18045 crear_registro18045(int id) {
    Registro18045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
