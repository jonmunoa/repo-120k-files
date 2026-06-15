// fichero 44493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44493;

Registro44493 crear_registro44493(int id) {
    Registro44493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
