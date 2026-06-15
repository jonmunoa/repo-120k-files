// fichero 29313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29313;

Registro29313 crear_registro29313(int id) {
    Registro29313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
