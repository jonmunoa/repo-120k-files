// fichero 24933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24933;

Registro24933 crear_registro24933(int id) {
    Registro24933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
