// fichero 21121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21121;

Registro21121 crear_registro21121(int id) {
    Registro21121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
