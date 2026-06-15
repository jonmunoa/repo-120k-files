// fichero 11645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11645;

Registro11645 crear_registro11645(int id) {
    Registro11645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
