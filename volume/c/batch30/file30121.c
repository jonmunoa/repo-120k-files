// fichero 30121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30121;

Registro30121 crear_registro30121(int id) {
    Registro30121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
