// fichero 11073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11073;

Registro11073 crear_registro11073(int id) {
    Registro11073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
