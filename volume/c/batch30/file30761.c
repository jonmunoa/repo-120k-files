// fichero 30761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30761;

Registro30761 crear_registro30761(int id) {
    Registro30761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
