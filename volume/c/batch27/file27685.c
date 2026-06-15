// fichero 27685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27685;

Registro27685 crear_registro27685(int id) {
    Registro27685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
