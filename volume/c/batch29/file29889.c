// fichero 29889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29889;

Registro29889 crear_registro29889(int id) {
    Registro29889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
