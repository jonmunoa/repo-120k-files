// fichero 33845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33845;

Registro33845 crear_registro33845(int id) {
    Registro33845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
