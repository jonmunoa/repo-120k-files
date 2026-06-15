// fichero 9525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9525;

Registro9525 crear_registro9525(int id) {
    Registro9525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
