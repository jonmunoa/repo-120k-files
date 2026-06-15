// fichero 11069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11069;

Registro11069 crear_registro11069(int id) {
    Registro11069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
