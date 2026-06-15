// fichero 47121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47121;

Registro47121 crear_registro47121(int id) {
    Registro47121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
