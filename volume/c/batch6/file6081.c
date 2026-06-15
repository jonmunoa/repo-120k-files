// fichero 6081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6081;

Registro6081 crear_registro6081(int id) {
    Registro6081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
