// fichero 47025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47025;

Registro47025 crear_registro47025(int id) {
    Registro47025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
