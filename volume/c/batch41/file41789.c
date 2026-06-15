// fichero 41789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41789;

Registro41789 crear_registro41789(int id) {
    Registro41789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
