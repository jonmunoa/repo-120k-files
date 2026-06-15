// fichero 41493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41493;

Registro41493 crear_registro41493(int id) {
    Registro41493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
