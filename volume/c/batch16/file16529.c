// fichero 16529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16529;

Registro16529 crear_registro16529(int id) {
    Registro16529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
