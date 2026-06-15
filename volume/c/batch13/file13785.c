// fichero 13785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13785;

Registro13785 crear_registro13785(int id) {
    Registro13785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
