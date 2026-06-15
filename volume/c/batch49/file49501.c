// fichero 49501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49501;

Registro49501 crear_registro49501(int id) {
    Registro49501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
