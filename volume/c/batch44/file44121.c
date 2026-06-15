// fichero 44121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44121;

Registro44121 crear_registro44121(int id) {
    Registro44121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
