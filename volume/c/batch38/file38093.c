// fichero 38093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38093;

Registro38093 crear_registro38093(int id) {
    Registro38093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
