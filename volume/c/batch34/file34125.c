// fichero 34125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34125;

Registro34125 crear_registro34125(int id) {
    Registro34125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
