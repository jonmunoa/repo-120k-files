// fichero 15205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15205;

Registro15205 crear_registro15205(int id) {
    Registro15205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
