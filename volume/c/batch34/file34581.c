// fichero 34581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34581;

Registro34581 crear_registro34581(int id) {
    Registro34581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
