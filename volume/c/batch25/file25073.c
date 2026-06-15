// fichero 25073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25073;

Registro25073 crear_registro25073(int id) {
    Registro25073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
