// fichero 18657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18657;

Registro18657 crear_registro18657(int id) {
    Registro18657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
