// fichero 45109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45109;

Registro45109 crear_registro45109(int id) {
    Registro45109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
