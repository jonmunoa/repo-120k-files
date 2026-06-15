// fichero 39753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39753;

Registro39753 crear_registro39753(int id) {
    Registro39753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
