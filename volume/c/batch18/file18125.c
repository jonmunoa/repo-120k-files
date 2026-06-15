// fichero 18125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18125;

Registro18125 crear_registro18125(int id) {
    Registro18125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
