// fichero 43193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43193;

Registro43193 crear_registro43193(int id) {
    Registro43193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
