// fichero 18893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18893;

Registro18893 crear_registro18893(int id) {
    Registro18893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
