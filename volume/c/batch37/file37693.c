// fichero 37693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37693;

Registro37693 crear_registro37693(int id) {
    Registro37693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
