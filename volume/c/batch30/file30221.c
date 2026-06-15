// fichero 30221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30221;

Registro30221 crear_registro30221(int id) {
    Registro30221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
