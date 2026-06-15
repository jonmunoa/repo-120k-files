// fichero 42109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42109;

Registro42109 crear_registro42109(int id) {
    Registro42109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
