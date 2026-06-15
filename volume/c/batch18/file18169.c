// fichero 18169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18169;

Registro18169 crear_registro18169(int id) {
    Registro18169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
