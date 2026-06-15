// fichero 24073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24073;

Registro24073 crear_registro24073(int id) {
    Registro24073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
