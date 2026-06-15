// fichero 5137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5137;

Registro5137 crear_registro5137(int id) {
    Registro5137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
