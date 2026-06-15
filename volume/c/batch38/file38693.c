// fichero 38693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38693;

Registro38693 crear_registro38693(int id) {
    Registro38693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
