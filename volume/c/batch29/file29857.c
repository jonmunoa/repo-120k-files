// fichero 29857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29857;

Registro29857 crear_registro29857(int id) {
    Registro29857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
