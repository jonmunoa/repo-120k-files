// fichero 9285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9285;

Registro9285 crear_registro9285(int id) {
    Registro9285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
