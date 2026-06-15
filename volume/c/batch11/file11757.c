// fichero 11757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11757;

Registro11757 crear_registro11757(int id) {
    Registro11757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
