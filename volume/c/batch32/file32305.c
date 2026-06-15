// fichero 32305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32305;

Registro32305 crear_registro32305(int id) {
    Registro32305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
