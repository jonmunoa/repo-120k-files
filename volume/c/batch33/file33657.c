// fichero 33657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33657;

Registro33657 crear_registro33657(int id) {
    Registro33657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
