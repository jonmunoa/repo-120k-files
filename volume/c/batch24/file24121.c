// fichero 24121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24121;

Registro24121 crear_registro24121(int id) {
    Registro24121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
