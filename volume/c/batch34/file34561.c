// fichero 34561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34561;

Registro34561 crear_registro34561(int id) {
    Registro34561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
