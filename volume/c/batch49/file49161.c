// fichero 49161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49161;

Registro49161 crear_registro49161(int id) {
    Registro49161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
