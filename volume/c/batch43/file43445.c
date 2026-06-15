// fichero 43445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43445;

Registro43445 crear_registro43445(int id) {
    Registro43445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
