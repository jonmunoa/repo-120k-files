// fichero 28153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28153;

Registro28153 crear_registro28153(int id) {
    Registro28153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
