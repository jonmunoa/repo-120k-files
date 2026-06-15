// fichero 32069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32069;

Registro32069 crear_registro32069(int id) {
    Registro32069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
