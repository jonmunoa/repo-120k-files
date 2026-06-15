// fichero 16785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16785;

Registro16785 crear_registro16785(int id) {
    Registro16785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
