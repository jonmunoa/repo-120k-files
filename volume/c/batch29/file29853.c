// fichero 29853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29853;

Registro29853 crear_registro29853(int id) {
    Registro29853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
