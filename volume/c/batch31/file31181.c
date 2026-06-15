// fichero 31181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31181;

Registro31181 crear_registro31181(int id) {
    Registro31181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
