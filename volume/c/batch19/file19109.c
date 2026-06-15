// fichero 19109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19109;

Registro19109 crear_registro19109(int id) {
    Registro19109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
