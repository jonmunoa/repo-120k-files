// fichero 28301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28301;

Registro28301 crear_registro28301(int id) {
    Registro28301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
