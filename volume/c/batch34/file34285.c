// fichero 34285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34285;

Registro34285 crear_registro34285(int id) {
    Registro34285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
