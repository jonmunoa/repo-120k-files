// fichero 5065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5065;

Registro5065 crear_registro5065(int id) {
    Registro5065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
