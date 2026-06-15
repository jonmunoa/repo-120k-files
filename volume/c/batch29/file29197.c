// fichero 29197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29197;

Registro29197 crear_registro29197(int id) {
    Registro29197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
