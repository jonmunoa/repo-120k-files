// fichero 12573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12573;

Registro12573 crear_registro12573(int id) {
    Registro12573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
