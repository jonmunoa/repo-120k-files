// fichero 6693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6693;

Registro6693 crear_registro6693(int id) {
    Registro6693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
