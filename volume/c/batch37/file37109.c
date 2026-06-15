// fichero 37109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37109;

Registro37109 crear_registro37109(int id) {
    Registro37109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
