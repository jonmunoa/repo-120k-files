// fichero 49885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49885;

Registro49885 crear_registro49885(int id) {
    Registro49885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
