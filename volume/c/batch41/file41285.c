// fichero 41285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41285;

Registro41285 crear_registro41285(int id) {
    Registro41285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
