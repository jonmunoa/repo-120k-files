// fichero 11865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11865;

Registro11865 crear_registro11865(int id) {
    Registro11865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
