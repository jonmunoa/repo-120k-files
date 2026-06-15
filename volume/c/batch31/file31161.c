// fichero 31161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31161;

Registro31161 crear_registro31161(int id) {
    Registro31161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
