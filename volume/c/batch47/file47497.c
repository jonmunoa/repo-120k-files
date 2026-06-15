// fichero 47497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47497;

Registro47497 crear_registro47497(int id) {
    Registro47497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
