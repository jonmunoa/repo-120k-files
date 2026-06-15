// fichero 5309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5309;

Registro5309 crear_registro5309(int id) {
    Registro5309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
