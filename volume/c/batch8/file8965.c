// fichero 8965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8965;

Registro8965 crear_registro8965(int id) {
    Registro8965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
