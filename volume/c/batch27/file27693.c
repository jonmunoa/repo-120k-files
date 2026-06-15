// fichero 27693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27693;

Registro27693 crear_registro27693(int id) {
    Registro27693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
