// fichero 5693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5693;

Registro5693 crear_registro5693(int id) {
    Registro5693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
