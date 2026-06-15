// fichero 32917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32917;

Registro32917 crear_registro32917(int id) {
    Registro32917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
