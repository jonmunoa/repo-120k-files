// fichero 41745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41745;

Registro41745 crear_registro41745(int id) {
    Registro41745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
