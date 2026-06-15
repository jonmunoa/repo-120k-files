// fichero 47017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47017;

Registro47017 crear_registro47017(int id) {
    Registro47017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
