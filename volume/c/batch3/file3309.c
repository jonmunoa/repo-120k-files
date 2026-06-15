// fichero 3309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3309;

Registro3309 crear_registro3309(int id) {
    Registro3309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
