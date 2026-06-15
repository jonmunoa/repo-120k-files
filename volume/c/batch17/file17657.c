// fichero 17657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17657;

Registro17657 crear_registro17657(int id) {
    Registro17657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
