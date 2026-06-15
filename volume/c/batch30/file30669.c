// fichero 30669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30669;

Registro30669 crear_registro30669(int id) {
    Registro30669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
