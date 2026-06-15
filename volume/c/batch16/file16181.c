// fichero 16181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16181;

Registro16181 crear_registro16181(int id) {
    Registro16181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
