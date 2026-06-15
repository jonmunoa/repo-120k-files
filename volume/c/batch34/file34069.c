// fichero 34069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34069;

Registro34069 crear_registro34069(int id) {
    Registro34069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
