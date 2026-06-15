// fichero 49877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49877;

Registro49877 crear_registro49877(int id) {
    Registro49877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
