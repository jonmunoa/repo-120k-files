// fichero 5281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5281;

Registro5281 crear_registro5281(int id) {
    Registro5281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
