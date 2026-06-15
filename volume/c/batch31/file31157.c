// fichero 31157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31157;

Registro31157 crear_registro31157(int id) {
    Registro31157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
