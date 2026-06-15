// fichero 5945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5945;

Registro5945 crear_registro5945(int id) {
    Registro5945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
