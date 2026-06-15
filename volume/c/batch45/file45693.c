// fichero 45693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45693;

Registro45693 crear_registro45693(int id) {
    Registro45693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
