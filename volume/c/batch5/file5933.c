// fichero 5933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5933;

Registro5933 crear_registro5933(int id) {
    Registro5933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
