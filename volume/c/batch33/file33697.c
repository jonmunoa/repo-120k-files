// fichero 33697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33697;

Registro33697 crear_registro33697(int id) {
    Registro33697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
