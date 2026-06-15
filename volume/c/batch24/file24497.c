// fichero 24497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24497;

Registro24497 crear_registro24497(int id) {
    Registro24497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
