// fichero 14809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14809;

Registro14809 crear_registro14809(int id) {
    Registro14809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
