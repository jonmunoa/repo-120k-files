// fichero 26121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26121;

Registro26121 crear_registro26121(int id) {
    Registro26121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
