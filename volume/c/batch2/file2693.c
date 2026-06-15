// fichero 2693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2693;

Registro2693 crear_registro2693(int id) {
    Registro2693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
