// fichero 6521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6521;

Registro6521 crear_registro6521(int id) {
    Registro6521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
