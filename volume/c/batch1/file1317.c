// fichero 1317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1317;

Registro1317 crear_registro1317(int id) {
    Registro1317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
