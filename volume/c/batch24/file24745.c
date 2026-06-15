// fichero 24745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24745;

Registro24745 crear_registro24745(int id) {
    Registro24745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
