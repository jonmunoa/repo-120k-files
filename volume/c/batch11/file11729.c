// fichero 11729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11729;

Registro11729 crear_registro11729(int id) {
    Registro11729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
