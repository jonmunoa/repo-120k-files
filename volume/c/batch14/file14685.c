// fichero 14685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14685;

Registro14685 crear_registro14685(int id) {
    Registro14685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
