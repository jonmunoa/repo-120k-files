// fichero 40761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40761;

Registro40761 crear_registro40761(int id) {
    Registro40761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
