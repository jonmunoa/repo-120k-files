// fichero 15645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15645;

Registro15645 crear_registro15645(int id) {
    Registro15645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
