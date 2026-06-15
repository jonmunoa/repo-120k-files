// fichero 8617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8617;

Registro8617 crear_registro8617(int id) {
    Registro8617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
