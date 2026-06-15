// fichero 17693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17693;

Registro17693 crear_registro17693(int id) {
    Registro17693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
