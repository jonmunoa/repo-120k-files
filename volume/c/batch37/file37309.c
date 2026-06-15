// fichero 37309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37309;

Registro37309 crear_registro37309(int id) {
    Registro37309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
