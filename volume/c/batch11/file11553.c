// fichero 11553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11553;

Registro11553 crear_registro11553(int id) {
    Registro11553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
