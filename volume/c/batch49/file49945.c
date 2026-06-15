// fichero 49945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49945;

Registro49945 crear_registro49945(int id) {
    Registro49945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
