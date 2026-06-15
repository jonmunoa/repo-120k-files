// fichero 11821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11821;

Registro11821 crear_registro11821(int id) {
    Registro11821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
