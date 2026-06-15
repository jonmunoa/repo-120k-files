// fichero 7181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7181;

Registro7181 crear_registro7181(int id) {
    Registro7181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
