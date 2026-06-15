// fichero 18841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18841;

Registro18841 crear_registro18841(int id) {
    Registro18841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
