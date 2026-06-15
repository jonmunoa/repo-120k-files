// fichero 24433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24433;

Registro24433 crear_registro24433(int id) {
    Registro24433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
