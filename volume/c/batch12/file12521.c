// fichero 12521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12521;

Registro12521 crear_registro12521(int id) {
    Registro12521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
