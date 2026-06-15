// fichero 24657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24657;

Registro24657 crear_registro24657(int id) {
    Registro24657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
