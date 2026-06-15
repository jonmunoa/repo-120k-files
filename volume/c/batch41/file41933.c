// fichero 41933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41933;

Registro41933 crear_registro41933(int id) {
    Registro41933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
