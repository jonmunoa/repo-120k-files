// fichero 14193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14193;

Registro14193 crear_registro14193(int id) {
    Registro14193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
