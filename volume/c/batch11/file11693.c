// fichero 11693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11693;

Registro11693 crear_registro11693(int id) {
    Registro11693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
