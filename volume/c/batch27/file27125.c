// fichero 27125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27125;

Registro27125 crear_registro27125(int id) {
    Registro27125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
