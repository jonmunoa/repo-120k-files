// fichero 29161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29161;

Registro29161 crear_registro29161(int id) {
    Registro29161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
