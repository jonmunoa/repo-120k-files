// fichero 109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro109;

Registro109 crear_registro109(int id) {
    Registro109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
