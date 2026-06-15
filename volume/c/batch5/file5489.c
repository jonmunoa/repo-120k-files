// fichero 5489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5489;

Registro5489 crear_registro5489(int id) {
    Registro5489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
