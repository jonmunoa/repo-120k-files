// fichero 29997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29997;

Registro29997 crear_registro29997(int id) {
    Registro29997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
