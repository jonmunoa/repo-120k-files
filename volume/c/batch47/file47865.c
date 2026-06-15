// fichero 47865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47865;

Registro47865 crear_registro47865(int id) {
    Registro47865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
