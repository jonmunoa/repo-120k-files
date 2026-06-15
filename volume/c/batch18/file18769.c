// fichero 18769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18769;

Registro18769 crear_registro18769(int id) {
    Registro18769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
