// fichero 5885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5885;

Registro5885 crear_registro5885(int id) {
    Registro5885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
