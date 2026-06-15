// fichero 15669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15669;

Registro15669 crear_registro15669(int id) {
    Registro15669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
