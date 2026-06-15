// fichero 9597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9597;

Registro9597 crear_registro9597(int id) {
    Registro9597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
