// fichero 28345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28345;

Registro28345 crear_registro28345(int id) {
    Registro28345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
