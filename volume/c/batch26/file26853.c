// fichero 26853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26853;

Registro26853 crear_registro26853(int id) {
    Registro26853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
