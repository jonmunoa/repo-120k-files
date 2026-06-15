// fichero 41725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41725;

Registro41725 crear_registro41725(int id) {
    Registro41725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
