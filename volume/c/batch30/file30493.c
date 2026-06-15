// fichero 30493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30493;

Registro30493 crear_registro30493(int id) {
    Registro30493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
