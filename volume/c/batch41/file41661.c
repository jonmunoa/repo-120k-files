// fichero 41661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41661;

Registro41661 crear_registro41661(int id) {
    Registro41661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
