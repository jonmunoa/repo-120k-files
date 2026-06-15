// fichero 38121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38121;

Registro38121 crear_registro38121(int id) {
    Registro38121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
