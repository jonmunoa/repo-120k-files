// fichero 34585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34585;

Registro34585 crear_registro34585(int id) {
    Registro34585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
