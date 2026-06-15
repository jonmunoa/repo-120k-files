// fichero 8257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8257;

Registro8257 crear_registro8257(int id) {
    Registro8257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
