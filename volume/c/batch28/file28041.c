// fichero 28041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28041;

Registro28041 crear_registro28041(int id) {
    Registro28041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
