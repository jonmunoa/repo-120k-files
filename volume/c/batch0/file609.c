// fichero 609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro609;

Registro609 crear_registro609(int id) {
    Registro609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
