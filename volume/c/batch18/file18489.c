// fichero 18489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18489;

Registro18489 crear_registro18489(int id) {
    Registro18489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
