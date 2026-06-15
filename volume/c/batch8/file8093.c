// fichero 8093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8093;

Registro8093 crear_registro8093(int id) {
    Registro8093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
