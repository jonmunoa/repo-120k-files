// fichero 34305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34305;

Registro34305 crear_registro34305(int id) {
    Registro34305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
