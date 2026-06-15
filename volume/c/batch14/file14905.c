// fichero 14905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14905;

Registro14905 crear_registro14905(int id) {
    Registro14905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
