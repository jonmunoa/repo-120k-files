// fichero 36069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36069;

Registro36069 crear_registro36069(int id) {
    Registro36069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
