// fichero 8685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8685;

Registro8685 crear_registro8685(int id) {
    Registro8685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
