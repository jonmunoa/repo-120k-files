// fichero 8853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8853;

Registro8853 crear_registro8853(int id) {
    Registro8853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
