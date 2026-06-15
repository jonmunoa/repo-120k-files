// fichero 38109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38109;

Registro38109 crear_registro38109(int id) {
    Registro38109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
