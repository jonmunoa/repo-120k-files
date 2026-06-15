// fichero 6033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6033;

Registro6033 crear_registro6033(int id) {
    Registro6033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
