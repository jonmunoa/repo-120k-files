// fichero 19497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19497;

Registro19497 crear_registro19497(int id) {
    Registro19497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
