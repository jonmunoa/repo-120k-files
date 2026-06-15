// fichero 6749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6749;

Registro6749 crear_registro6749(int id) {
    Registro6749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
