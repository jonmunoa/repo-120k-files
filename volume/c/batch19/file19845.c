// fichero 19845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19845;

Registro19845 crear_registro19845(int id) {
    Registro19845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
