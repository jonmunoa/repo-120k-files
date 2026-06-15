// fichero 41 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41;

Registro41 crear_registro41(int id) {
    Registro41 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
