// fichero 21693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21693;

Registro21693 crear_registro21693(int id) {
    Registro21693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
