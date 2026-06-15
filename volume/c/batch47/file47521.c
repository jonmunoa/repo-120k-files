// fichero 47521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47521;

Registro47521 crear_registro47521(int id) {
    Registro47521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
