// fichero 47669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47669;

Registro47669 crear_registro47669(int id) {
    Registro47669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
