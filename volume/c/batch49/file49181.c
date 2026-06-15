// fichero 49181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49181;

Registro49181 crear_registro49181(int id) {
    Registro49181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
