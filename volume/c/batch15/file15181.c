// fichero 15181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15181;

Registro15181 crear_registro15181(int id) {
    Registro15181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
