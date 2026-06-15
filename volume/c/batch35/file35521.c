// fichero 35521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35521;

Registro35521 crear_registro35521(int id) {
    Registro35521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
