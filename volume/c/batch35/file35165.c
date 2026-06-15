// fichero 35165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35165;

Registro35165 crear_registro35165(int id) {
    Registro35165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
