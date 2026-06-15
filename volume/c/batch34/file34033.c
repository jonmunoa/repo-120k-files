// fichero 34033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34033;

Registro34033 crear_registro34033(int id) {
    Registro34033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
