// fichero 28505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28505;

Registro28505 crear_registro28505(int id) {
    Registro28505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
