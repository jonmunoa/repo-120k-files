// fichero 11797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11797;

Registro11797 crear_registro11797(int id) {
    Registro11797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
