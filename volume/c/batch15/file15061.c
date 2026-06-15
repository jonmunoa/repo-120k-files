// fichero 15061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15061;

Registro15061 crear_registro15061(int id) {
    Registro15061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
