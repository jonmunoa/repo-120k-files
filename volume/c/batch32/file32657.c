// fichero 32657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32657;

Registro32657 crear_registro32657(int id) {
    Registro32657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
