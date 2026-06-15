// fichero 14913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14913;

Registro14913 crear_registro14913(int id) {
    Registro14913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
