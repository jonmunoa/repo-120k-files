// fichero 40909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40909;

Registro40909 crear_registro40909(int id) {
    Registro40909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
