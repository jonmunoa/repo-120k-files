// fichero 29933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29933;

Registro29933 crear_registro29933(int id) {
    Registro29933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
