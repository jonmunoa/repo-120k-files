// fichero 45489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45489;

Registro45489 crear_registro45489(int id) {
    Registro45489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
