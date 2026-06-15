// fichero 17901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17901;

Registro17901 crear_registro17901(int id) {
    Registro17901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
