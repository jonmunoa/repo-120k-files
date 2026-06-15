// fichero 37617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37617;

Registro37617 crear_registro37617(int id) {
    Registro37617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
