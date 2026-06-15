// fichero 44497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44497;

Registro44497 crear_registro44497(int id) {
    Registro44497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
