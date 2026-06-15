// fichero 41673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41673;

Registro41673 crear_registro41673(int id) {
    Registro41673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
