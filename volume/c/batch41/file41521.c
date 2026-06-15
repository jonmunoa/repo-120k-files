// fichero 41521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41521;

Registro41521 crear_registro41521(int id) {
    Registro41521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
