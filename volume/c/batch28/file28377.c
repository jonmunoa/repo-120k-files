// fichero 28377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28377;

Registro28377 crear_registro28377(int id) {
    Registro28377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
