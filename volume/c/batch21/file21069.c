// fichero 21069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21069;

Registro21069 crear_registro21069(int id) {
    Registro21069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
