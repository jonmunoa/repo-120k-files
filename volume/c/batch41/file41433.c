// fichero 41433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41433;

Registro41433 crear_registro41433(int id) {
    Registro41433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
