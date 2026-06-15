// fichero 31693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31693;

Registro31693 crear_registro31693(int id) {
    Registro31693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
