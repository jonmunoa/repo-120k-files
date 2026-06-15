// fichero 7693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7693;

Registro7693 crear_registro7693(int id) {
    Registro7693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
