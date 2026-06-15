// fichero 1917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1917;

Registro1917 crear_registro1917(int id) {
    Registro1917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
