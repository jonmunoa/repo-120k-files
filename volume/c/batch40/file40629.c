// fichero 40629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40629;

Registro40629 crear_registro40629(int id) {
    Registro40629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
