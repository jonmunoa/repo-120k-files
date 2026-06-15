// fichero 49033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49033;

Registro49033 crear_registro49033(int id) {
    Registro49033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
