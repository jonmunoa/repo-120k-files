// fichero 29821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29821;

Registro29821 crear_registro29821(int id) {
    Registro29821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
