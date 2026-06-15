// fichero 27529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27529;

Registro27529 crear_registro27529(int id) {
    Registro27529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
