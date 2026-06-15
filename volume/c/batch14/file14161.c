// fichero 14161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14161;

Registro14161 crear_registro14161(int id) {
    Registro14161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
