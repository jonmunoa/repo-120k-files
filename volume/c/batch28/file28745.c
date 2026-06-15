// fichero 28745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28745;

Registro28745 crear_registro28745(int id) {
    Registro28745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
