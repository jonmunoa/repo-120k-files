// fichero 26809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26809;

Registro26809 crear_registro26809(int id) {
    Registro26809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
