// fichero 1329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1329;

Registro1329 crear_registro1329(int id) {
    Registro1329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
