// fichero 49177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49177;

Registro49177 crear_registro49177(int id) {
    Registro49177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
