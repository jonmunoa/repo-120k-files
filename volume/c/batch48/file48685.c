// fichero 48685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48685;

Registro48685 crear_registro48685(int id) {
    Registro48685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
