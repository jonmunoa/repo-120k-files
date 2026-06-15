// fichero 26217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26217;

Registro26217 crear_registro26217(int id) {
    Registro26217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
