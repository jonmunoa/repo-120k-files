// fichero 34189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34189;

Registro34189 crear_registro34189(int id) {
    Registro34189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
