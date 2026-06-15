// fichero 28737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28737;

Registro28737 crear_registro28737(int id) {
    Registro28737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
