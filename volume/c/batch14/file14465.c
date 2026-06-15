// fichero 14465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14465;

Registro14465 crear_registro14465(int id) {
    Registro14465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
