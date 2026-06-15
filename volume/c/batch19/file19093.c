// fichero 19093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19093;

Registro19093 crear_registro19093(int id) {
    Registro19093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
