// fichero 38613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38613;

Registro38613 crear_registro38613(int id) {
    Registro38613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
