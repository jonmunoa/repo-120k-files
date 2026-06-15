// fichero 18689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18689;

Registro18689 crear_registro18689(int id) {
    Registro18689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
