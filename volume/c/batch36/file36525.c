// fichero 36525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36525;

Registro36525 crear_registro36525(int id) {
    Registro36525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
