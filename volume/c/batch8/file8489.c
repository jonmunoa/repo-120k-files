// fichero 8489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8489;

Registro8489 crear_registro8489(int id) {
    Registro8489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
