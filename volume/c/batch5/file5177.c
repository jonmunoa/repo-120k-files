// fichero 5177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5177;

Registro5177 crear_registro5177(int id) {
    Registro5177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
