// fichero 18669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18669;

Registro18669 crear_registro18669(int id) {
    Registro18669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
