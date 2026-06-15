// fichero 3693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3693;

Registro3693 crear_registro3693(int id) {
    Registro3693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
