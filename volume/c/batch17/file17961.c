// fichero 17961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17961;

Registro17961 crear_registro17961(int id) {
    Registro17961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
