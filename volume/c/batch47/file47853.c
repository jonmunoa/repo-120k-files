// fichero 47853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47853;

Registro47853 crear_registro47853(int id) {
    Registro47853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
