// fichero 19813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19813;

Registro19813 crear_registro19813(int id) {
    Registro19813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
