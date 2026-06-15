// fichero 49129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49129;

Registro49129 crear_registro49129(int id) {
    Registro49129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
