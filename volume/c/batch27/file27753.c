// fichero 27753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27753;

Registro27753 crear_registro27753(int id) {
    Registro27753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
