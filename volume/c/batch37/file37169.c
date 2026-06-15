// fichero 37169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37169;

Registro37169 crear_registro37169(int id) {
    Registro37169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
