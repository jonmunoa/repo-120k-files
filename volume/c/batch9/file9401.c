// fichero 9401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9401;

Registro9401 crear_registro9401(int id) {
    Registro9401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
