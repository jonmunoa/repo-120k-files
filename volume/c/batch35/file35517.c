// fichero 35517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35517;

Registro35517 crear_registro35517(int id) {
    Registro35517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
