// fichero 20745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20745;

Registro20745 crear_registro20745(int id) {
    Registro20745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
