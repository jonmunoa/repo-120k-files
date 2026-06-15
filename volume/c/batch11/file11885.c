// fichero 11885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11885;

Registro11885 crear_registro11885(int id) {
    Registro11885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
