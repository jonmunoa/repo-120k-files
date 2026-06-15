// fichero 24417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24417;

Registro24417 crear_registro24417(int id) {
    Registro24417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
