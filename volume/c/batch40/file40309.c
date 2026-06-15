// fichero 40309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40309;

Registro40309 crear_registro40309(int id) {
    Registro40309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
