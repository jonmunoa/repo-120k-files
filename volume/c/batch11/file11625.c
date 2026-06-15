// fichero 11625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11625;

Registro11625 crear_registro11625(int id) {
    Registro11625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
