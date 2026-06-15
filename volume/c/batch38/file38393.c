// fichero 38393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38393;

Registro38393 crear_registro38393(int id) {
    Registro38393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
