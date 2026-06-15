// fichero 11469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11469;

Registro11469 crear_registro11469(int id) {
    Registro11469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
