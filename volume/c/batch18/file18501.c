// fichero 18501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18501;

Registro18501 crear_registro18501(int id) {
    Registro18501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
