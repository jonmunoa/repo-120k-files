// fichero 38669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38669;

Registro38669 crear_registro38669(int id) {
    Registro38669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
