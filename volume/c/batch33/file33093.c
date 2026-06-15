// fichero 33093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33093;

Registro33093 crear_registro33093(int id) {
    Registro33093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
