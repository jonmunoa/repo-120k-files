// fichero 3617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3617;

Registro3617 crear_registro3617(int id) {
    Registro3617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
