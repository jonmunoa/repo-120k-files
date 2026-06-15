// fichero 45113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45113;

Registro45113 crear_registro45113(int id) {
    Registro45113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
