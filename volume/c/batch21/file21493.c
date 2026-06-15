// fichero 21493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21493;

Registro21493 crear_registro21493(int id) {
    Registro21493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
