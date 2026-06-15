// fichero 11313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11313;

Registro11313 crear_registro11313(int id) {
    Registro11313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
