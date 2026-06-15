// fichero 3945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3945;

Registro3945 crear_registro3945(int id) {
    Registro3945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
