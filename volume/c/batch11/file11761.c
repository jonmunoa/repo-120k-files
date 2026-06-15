// fichero 11761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11761;

Registro11761 crear_registro11761(int id) {
    Registro11761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
