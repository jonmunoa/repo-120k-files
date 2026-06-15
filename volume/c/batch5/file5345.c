// fichero 5345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5345;

Registro5345 crear_registro5345(int id) {
    Registro5345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
