// fichero 32153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32153;

Registro32153 crear_registro32153(int id) {
    Registro32153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
