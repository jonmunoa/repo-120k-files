// fichero 10309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10309;

Registro10309 crear_registro10309(int id) {
    Registro10309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
