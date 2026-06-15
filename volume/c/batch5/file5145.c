// fichero 5145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5145;

Registro5145 crear_registro5145(int id) {
    Registro5145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
