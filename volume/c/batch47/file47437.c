// fichero 47437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47437;

Registro47437 crear_registro47437(int id) {
    Registro47437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
