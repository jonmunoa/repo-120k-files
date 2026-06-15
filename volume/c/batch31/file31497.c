// fichero 31497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31497;

Registro31497 crear_registro31497(int id) {
    Registro31497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
