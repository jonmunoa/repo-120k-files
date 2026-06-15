// fichero 49193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49193;

Registro49193 crear_registro49193(int id) {
    Registro49193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
