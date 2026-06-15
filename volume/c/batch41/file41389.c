// fichero 41389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41389;

Registro41389 crear_registro41389(int id) {
    Registro41389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
