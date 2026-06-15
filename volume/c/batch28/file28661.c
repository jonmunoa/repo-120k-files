// fichero 28661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28661;

Registro28661 crear_registro28661(int id) {
    Registro28661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
