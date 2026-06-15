// fichero 5805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5805;

Registro5805 crear_registro5805(int id) {
    Registro5805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
