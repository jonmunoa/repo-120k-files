// fichero 5197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5197;

Registro5197 crear_registro5197(int id) {
    Registro5197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
