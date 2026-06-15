// fichero 29157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29157;

Registro29157 crear_registro29157(int id) {
    Registro29157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
