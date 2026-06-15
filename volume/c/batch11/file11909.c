// fichero 11909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11909;

Registro11909 crear_registro11909(int id) {
    Registro11909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
