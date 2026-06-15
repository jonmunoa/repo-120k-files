// fichero 11789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11789;

Registro11789 crear_registro11789(int id) {
    Registro11789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
