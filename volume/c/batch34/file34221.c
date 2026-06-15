// fichero 34221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34221;

Registro34221 crear_registro34221(int id) {
    Registro34221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
