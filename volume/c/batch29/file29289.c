// fichero 29289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29289;

Registro29289 crear_registro29289(int id) {
    Registro29289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
