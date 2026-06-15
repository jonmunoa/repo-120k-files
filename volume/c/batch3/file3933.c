// fichero 3933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3933;

Registro3933 crear_registro3933(int id) {
    Registro3933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
