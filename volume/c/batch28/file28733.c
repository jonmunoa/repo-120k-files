// fichero 28733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28733;

Registro28733 crear_registro28733(int id) {
    Registro28733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
