// fichero 16293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16293;

Registro16293 crear_registro16293(int id) {
    Registro16293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
