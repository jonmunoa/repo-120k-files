// fichero 31125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31125;

Registro31125 crear_registro31125(int id) {
    Registro31125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
