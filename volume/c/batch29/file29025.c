// fichero 29025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29025;

Registro29025 crear_registro29025(int id) {
    Registro29025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
