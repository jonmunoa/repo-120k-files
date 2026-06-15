// fichero 4693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4693;

Registro4693 crear_registro4693(int id) {
    Registro4693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
