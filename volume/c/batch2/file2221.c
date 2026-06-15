// fichero 2221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2221;

Registro2221 crear_registro2221(int id) {
    Registro2221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
