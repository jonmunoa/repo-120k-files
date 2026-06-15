// fichero 27169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27169;

Registro27169 crear_registro27169(int id) {
    Registro27169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
