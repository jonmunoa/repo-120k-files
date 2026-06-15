// fichero 3081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3081;

Registro3081 crear_registro3081(int id) {
    Registro3081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
