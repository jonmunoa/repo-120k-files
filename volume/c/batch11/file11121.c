// fichero 11121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11121;

Registro11121 crear_registro11121(int id) {
    Registro11121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
