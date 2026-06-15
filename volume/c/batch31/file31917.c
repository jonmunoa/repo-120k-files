// fichero 31917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31917;

Registro31917 crear_registro31917(int id) {
    Registro31917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
