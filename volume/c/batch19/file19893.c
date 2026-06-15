// fichero 19893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19893;

Registro19893 crear_registro19893(int id) {
    Registro19893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
