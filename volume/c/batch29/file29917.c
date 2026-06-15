// fichero 29917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29917;

Registro29917 crear_registro29917(int id) {
    Registro29917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
