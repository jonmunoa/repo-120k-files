// fichero 641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro641;

Registro641 crear_registro641(int id) {
    Registro641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
