// fichero 11373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11373;

Registro11373 crear_registro11373(int id) {
    Registro11373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
