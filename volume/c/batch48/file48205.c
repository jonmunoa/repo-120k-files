// fichero 48205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48205;

Registro48205 crear_registro48205(int id) {
    Registro48205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
