// fichero 28309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28309;

Registro28309 crear_registro28309(int id) {
    Registro28309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
