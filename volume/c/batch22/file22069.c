// fichero 22069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22069;

Registro22069 crear_registro22069(int id) {
    Registro22069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
