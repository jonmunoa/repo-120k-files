// fichero 37793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37793;

Registro37793 crear_registro37793(int id) {
    Registro37793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
