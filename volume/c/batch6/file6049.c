// fichero 6049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6049;

Registro6049 crear_registro6049(int id) {
    Registro6049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
