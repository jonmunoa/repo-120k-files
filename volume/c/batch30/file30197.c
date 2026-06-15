// fichero 30197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30197;

Registro30197 crear_registro30197(int id) {
    Registro30197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
