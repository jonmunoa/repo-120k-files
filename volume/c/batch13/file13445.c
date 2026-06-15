// fichero 13445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13445;

Registro13445 crear_registro13445(int id) {
    Registro13445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
