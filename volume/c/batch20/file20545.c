// fichero 20545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20545;

Registro20545 crear_registro20545(int id) {
    Registro20545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
