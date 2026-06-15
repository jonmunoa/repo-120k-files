// fichero 6809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6809;

Registro6809 crear_registro6809(int id) {
    Registro6809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
