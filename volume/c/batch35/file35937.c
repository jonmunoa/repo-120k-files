// fichero 35937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35937;

Registro35937 crear_registro35937(int id) {
    Registro35937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
