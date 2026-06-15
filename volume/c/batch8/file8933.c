// fichero 8933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8933;

Registro8933 crear_registro8933(int id) {
    Registro8933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
