// fichero 24565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24565;

Registro24565 crear_registro24565(int id) {
    Registro24565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
