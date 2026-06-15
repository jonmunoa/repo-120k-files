// fichero 34105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34105;

Registro34105 crear_registro34105(int id) {
    Registro34105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
