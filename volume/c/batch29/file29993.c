// fichero 29993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29993;

Registro29993 crear_registro29993(int id) {
    Registro29993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
