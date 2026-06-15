// fichero 18033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18033;

Registro18033 crear_registro18033(int id) {
    Registro18033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
