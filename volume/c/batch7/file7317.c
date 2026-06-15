// fichero 7317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7317;

Registro7317 crear_registro7317(int id) {
    Registro7317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
