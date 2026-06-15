// fichero 5113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5113;

Registro5113 crear_registro5113(int id) {
    Registro5113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
