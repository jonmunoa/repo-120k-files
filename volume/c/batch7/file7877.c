// fichero 7877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7877;

Registro7877 crear_registro7877(int id) {
    Registro7877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
