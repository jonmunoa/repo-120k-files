// fichero 5193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5193;

Registro5193 crear_registro5193(int id) {
    Registro5193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
