// fichero 20997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20997;

Registro20997 crear_registro20997(int id) {
    Registro20997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
