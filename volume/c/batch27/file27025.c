// fichero 27025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27025;

Registro27025 crear_registro27025(int id) {
    Registro27025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
