// fichero 49093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49093;

Registro49093 crear_registro49093(int id) {
    Registro49093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
