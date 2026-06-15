// fichero 35497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35497;

Registro35497 crear_registro35497(int id) {
    Registro35497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
