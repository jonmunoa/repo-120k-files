// fichero 29309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29309;

Registro29309 crear_registro29309(int id) {
    Registro29309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
