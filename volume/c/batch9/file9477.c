// fichero 9477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9477;

Registro9477 crear_registro9477(int id) {
    Registro9477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
