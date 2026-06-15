// fichero 29093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29093;

Registro29093 crear_registro29093(int id) {
    Registro29093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
