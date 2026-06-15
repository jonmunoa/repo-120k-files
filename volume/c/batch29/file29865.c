// fichero 29865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29865;

Registro29865 crear_registro29865(int id) {
    Registro29865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
