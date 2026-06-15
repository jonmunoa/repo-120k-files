// fichero 11641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11641;

Registro11641 crear_registro11641(int id) {
    Registro11641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
