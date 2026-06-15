// fichero 5061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5061;

Registro5061 crear_registro5061(int id) {
    Registro5061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
