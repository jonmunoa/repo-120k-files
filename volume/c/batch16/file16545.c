// fichero 16545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16545;

Registro16545 crear_registro16545(int id) {
    Registro16545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
