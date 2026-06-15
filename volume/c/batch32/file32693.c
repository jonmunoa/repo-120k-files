// fichero 32693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32693;

Registro32693 crear_registro32693(int id) {
    Registro32693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
