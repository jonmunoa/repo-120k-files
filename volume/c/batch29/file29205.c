// fichero 29205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29205;

Registro29205 crear_registro29205(int id) {
    Registro29205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
