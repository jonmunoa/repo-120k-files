// fichero 49305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49305;

Registro49305 crear_registro49305(int id) {
    Registro49305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
