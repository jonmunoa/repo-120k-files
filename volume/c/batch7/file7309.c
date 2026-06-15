// fichero 7309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7309;

Registro7309 crear_registro7309(int id) {
    Registro7309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
