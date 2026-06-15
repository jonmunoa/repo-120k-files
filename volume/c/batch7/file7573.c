// fichero 7573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7573;

Registro7573 crear_registro7573(int id) {
    Registro7573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
