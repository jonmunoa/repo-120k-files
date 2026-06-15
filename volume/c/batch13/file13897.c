// fichero 13897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13897;

Registro13897 crear_registro13897(int id) {
    Registro13897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
