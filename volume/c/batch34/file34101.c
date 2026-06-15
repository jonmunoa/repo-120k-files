// fichero 34101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34101;

Registro34101 crear_registro34101(int id) {
    Registro34101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
