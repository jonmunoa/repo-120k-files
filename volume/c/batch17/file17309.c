// fichero 17309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17309;

Registro17309 crear_registro17309(int id) {
    Registro17309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
