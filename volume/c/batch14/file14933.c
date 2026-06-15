// fichero 14933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14933;

Registro14933 crear_registro14933(int id) {
    Registro14933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
