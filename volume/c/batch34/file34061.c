// fichero 34061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34061;

Registro34061 crear_registro34061(int id) {
    Registro34061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
