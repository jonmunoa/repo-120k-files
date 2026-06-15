// fichero 27309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27309;

Registro27309 crear_registro27309(int id) {
    Registro27309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
