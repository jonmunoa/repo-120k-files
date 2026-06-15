// fichero 47693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47693;

Registro47693 crear_registro47693(int id) {
    Registro47693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
