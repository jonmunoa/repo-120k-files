// fichero 41669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41669;

Registro41669 crear_registro41669(int id) {
    Registro41669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
