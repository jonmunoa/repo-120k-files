// fichero 6125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6125;

Registro6125 crear_registro6125(int id) {
    Registro6125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
