// fichero 8889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8889;

Registro8889 crear_registro8889(int id) {
    Registro8889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
