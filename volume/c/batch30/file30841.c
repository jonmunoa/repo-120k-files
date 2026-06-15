// fichero 30841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30841;

Registro30841 crear_registro30841(int id) {
    Registro30841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
