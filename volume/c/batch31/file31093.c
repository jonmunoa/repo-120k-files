// fichero 31093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31093;

Registro31093 crear_registro31093(int id) {
    Registro31093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
