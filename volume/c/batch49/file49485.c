// fichero 49485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49485;

Registro49485 crear_registro49485(int id) {
    Registro49485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
