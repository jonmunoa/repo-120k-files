// fichero 5301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5301;

Registro5301 crear_registro5301(int id) {
    Registro5301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
