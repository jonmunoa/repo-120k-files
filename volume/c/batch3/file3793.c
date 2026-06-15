// fichero 3793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3793;

Registro3793 crear_registro3793(int id) {
    Registro3793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
