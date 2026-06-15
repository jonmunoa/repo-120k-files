// fichero 5965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5965;

Registro5965 crear_registro5965(int id) {
    Registro5965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
