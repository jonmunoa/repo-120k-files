// fichero 7905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7905;

Registro7905 crear_registro7905(int id) {
    Registro7905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
