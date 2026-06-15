// fichero 29477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29477;

Registro29477 crear_registro29477(int id) {
    Registro29477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
